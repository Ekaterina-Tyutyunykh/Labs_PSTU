#pragma once

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>
#include <iostream>
#include "class_graph.h"
//#include <glut.h>
#include <stdio.h>
#include <sstream>


using namespace System::Windows::Forms;

namespace OpenGLForm
{
    public ref class COpenGL : public System::Windows::Forms::NativeWindow
    {
    public:
        COpenGL(System::Windows::Forms::Form^ parentForm, GLsizei iWidth, GLsizei iHeight)
        {
            CreateParams^ cp = gcnew CreateParams;

            // Set the position on the form
            cp->X = 0;
            cp->Y = 0;
            cp->Height = iHeight;
            cp->Width = iWidth;

            // Specify the form as the parent.
            cp->Parent = parentForm->Handle;

            // Create as a child of the specified parent and make OpenGL compliant (no clipping)
            cp->Style = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN;

            // Create the actual window
            this->CreateHandle(cp);

            m_hDC = GetDC((HWND)this->Handle.ToPointer());

            if (m_hDC)
            {
                MySetPixelFormat(m_hDC);
                ReSizeGLScene(iWidth, iHeight);
            }


                       
        }


        System::Void Render(System::Void)
        {
            //window
            glClearColor( 1.0/255.0*218.0, 1.0/255.0*247.0, 1.0/255.0*220.0, 1.0);  
            glClear(GL_COLOR_BUFFER_BIT);
            glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
            
            int lineAmount = current->v.size();
            GLfloat twice_pi = 3.14 * 2.0;
            GLfloat x = 0.0, y = 0.0;
            GLfloat r = 1.6; //radius

            for (int i = 0; i < lineAmount; ++i) {
                x = (r * cos((float)i * twice_pi / (float)lineAmount));
                y = (r * sin((float)i * twice_pi / (float)lineAmount));

                auto iter = current->v.begin();
                advance(iter, i);
                node* tr = (*iter);
                tr->pos.x = x;
                tr->pos.y = y;
            }

            //lines
            for each (node * temp in current->v) {

                x = temp->pos.x;
                y = temp->pos.y;
                for each (tracks * track in temp->t) {
                    if (track->b_point != nullptr) {
                        node* temp2 = track->b_point;
                        
                        glColor3f(1.0/255.0*158, 1.0/255.0*228, 1.0/255.0*147); 
                        glLineWidth(3.0);
                        glBegin(GL_LINES);
                       
                        glVertex3f(temp2->pos.x, temp2->pos.y, -5.0);
                        glVertex3f(x, y, -5.0);
                        glEnd();
                    }
                }
            }

            //circle
            for each (node * temp in current->v) {
                x = temp->pos.x;
                y = temp->pos.y;
                
                GLfloat size = (2.0 / ((float)lineAmount));
                temp->visited = true;

                glBegin(GL_TRIANGLE_FAN); 
                glColor3f(1.0/255.0*122, 1.0/255*86, 1.0/255.0*109); 
                int num_segments = 60;
                float r = 0.2;
                for (int ii = 0; ii < num_segments; ii++)
                {
                    float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

                    float x1 = r * cosf(theta);//calculate the x component
                    float y1 = r * sinf(theta);//calculate the y component

                    glVertex3f(x1 + x, y1 + y,-5.0);//output vertex

                }
                glEnd();

                GLfloat offset = 0.05;
                glColor3f(0.0, 0.0, 0.0);
                glRasterPos3f(x - offset, y - offset, -5.0);

            }
            for each (node * temp in current->v) {
                temp->visited = false;
            }
           
        }

        System::Void SwapOpenGLBuffers(System::Void)
        {
            SwapBuffers(m_hDC);
        }

        System::Void get_data(graph* x) {
            current = x;
        }

    private:
        HDC m_hDC;
        HGLRC m_hglrc;
        graph* current;

    protected:
        ~COpenGL(System::Void)
        {
            this->DestroyHandle();
        }
        GLint MySetPixelFormat(HDC hdc)
        {
            static  PIXELFORMATDESCRIPTOR pfd =        // pfd Tells Windows How We Want Things To Be
            {
              sizeof(PIXELFORMATDESCRIPTOR),        // Size Of This Pixel Format Descriptor
              1,                      // Version Number
              PFD_DRAW_TO_WINDOW |            // Format Must Support Window
              PFD_SUPPORT_OPENGL |            // Format Must Support OpenGL
              PFD_DOUBLEBUFFER,              // Must Support Double Buffering
              PFD_TYPE_RGBA,                // Request An RGBA Format
              16,                    // Select Our Color Depth
              0, 0, 0, 0, 0, 0,              // Color Bits Ignored
              0,                      // No Alpha Buffer
              0,                      // Shift Bit Ignored
              0,                      // No Accumulation Buffer
              0, 0, 0, 0,                  // Accumulation Bits Ignored
              16,                      // 16Bit Z-Buffer (Depth Buffer)  
              0,                      // No Stencil Buffer
              0,                      // No Auxiliary Buffer
              PFD_MAIN_PLANE,                // Main Drawing Layer
              0,                      // Reserved
              0, 0, 0                    // Layer Masks Ignored
            };

            GLint  iPixelFormat;

            // get the device context's best, available pixel format match 
            if ((iPixelFormat = ChoosePixelFormat(hdc, &pfd)) == 0)
            {
                MessageBox::Show("ChoosePixelFormat Failed");
                return 0;
            }

            // make that match the device context's current pixel format 
            if (SetPixelFormat(hdc, iPixelFormat, &pfd) == FALSE)
            {
                MessageBox::Show("SetPixelFormat Failed");
                return 0;
            }

            if ((m_hglrc = wglCreateContext(m_hDC)) == NULL)
            {
                MessageBox::Show("wglCreateContext Failed");
                return 0;
            }

            if ((wglMakeCurrent(m_hDC, m_hglrc)) == NULL)
            {
                MessageBox::Show("wglMakeCurrent Failed");
                return 0;
            }


            return 1;
        }


        GLvoid ReSizeGLScene(GLsizei width, GLsizei height)    // Resize and initialise the gl window
        {
            if (height == 0)                    // Prevent A Divide By Zero By
            {
                height = 1;                    // Making Height Equal One
            }

            glViewport(0, 0, width, height);          // Reset The Current Viewport
            glMatrixMode(GL_PROJECTION);            // Select The Projection Matrix
            glLoadIdentity();                  // Reset The Projection Matrix
           
            // Calculate The Aspect Ratio Of The Window
            gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);            
            glMatrixMode(GL_MODELVIEW);              // Select The Modelview Matrix
            glLoadIdentity();                  // Reset The Modelview Matrix
        }
  };
}
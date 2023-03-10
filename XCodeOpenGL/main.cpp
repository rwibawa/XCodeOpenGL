//
//  main.cpp
//  XCodeOpenGL
//
//  Created by Ryan Wibawa on 3/10/23.
//  Copyright © 2023 navisow. All rights reserved.
//

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main(int argc, const char * argv[]) {
    // Initialize GLFW
    if (!glfwInit())
        return -1;
    
    // tell GLFW what version of OpenGL we are using
    // In this case we are using OpenGL 3.3
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    // Tell GLFW we are using the CORE profile
    // So that means we only have the modern functions
    glfwWindowHint(GLFW_OPENGL_CORE_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);
    
    // Create a GLFWwindow object of 800 by 800 pixels, naming it "XCodeOpenGL"
    GLFWwindow* window = glfwCreateWindow(800, 800, "XCodeOpenGL", NULL, NULL);
    if (!window)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    
    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    
    // Load GLAD so it configures OpenGL
    gladLoadGL();
    
    // Specify the viewport of OpenGL in the Window
    // In this case the viewport goes from x = 0, y = 0, to x = 800, y = 800
    glViewport(0, 0, 800, 800);
    
    // Specify the color of the background
    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
    // Clean the back buffer and assign the new color to it
    glClear(GL_COLOR_BUFFER_BIT);
    // Swap the back buffer with the front buffer
    glfwSwapBuffers(window);
    
    // Main while loop
    while (!glfwWindowShouldClose(window))
    {
        // Take care of all GLFW events
        glfwPollEvents();
    }
    
    // Delete window before ending the program
    glfwDestroyWindow(window);
    // Terminate GLFW before ending
    glfwTerminate();
    
    return 0;
}

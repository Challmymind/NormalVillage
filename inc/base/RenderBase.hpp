#ifndef __RENDERBASE__
#define __RENDERBASE__

// Everythink that can render on screen is inheriting this class.

class RenderBase {
    public:
        // Called before any render call.
        virtual void SetRender() = 0;
        // Renders on screen.
        virtual void Render() = 0;
        // Callled before closing app.
        virtual void TerminateRender() = 0;
};

#endif
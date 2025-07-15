--- tsMuxer/osdep/textSubtitlesRenderFT.cpp.orig
+++ tsMuxer/osdep/textSubtitlesRenderFT.cpp
@@ -23,6 +23,8 @@
 const static char FONT_ROOT[] = "/System/Library/Fonts/";
 #elif defined(__NetBSD__)
 const static char FONT_ROOT[] = "/usr/X11R7/lib/X11/fonts/";
+#elif defined(__FreeBSD__)
+const static char FONT_ROOT[] = "/usr/local/share/fonts/";
 #endif

 #include <freetype/ftstroke.h>

#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    GtkWidget *window;

    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "«¢Åo¡IGTK+¡I");
    gtk_widget_show(window);
    gtk_main();


    // new-1: this is wrong
    // master: just did something
    // new-1: add test 1
    // master: add test 1
    // new-1: add test 2
<<<<<<< HEAD
    // test-2:
=======
    // new-1: add test 10
>>>>>>> 0b2d663608acc966ae02c888b80763888de24584

    return 0;
}

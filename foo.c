#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    GtkWidget *window;

    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "«¢Åo¡IGTK+¡I");
    gtk_widget_show(window);
    gtk_main();

<<<<<<< HEAD
    //done 2xx
=======
    //done 2
>>>>>>> ad0af12617d1b9860e42e31231eb731817be7553
    return 0;
}

#include <iostream>
#include <gtk/gtk.h>

using namespace std;

static void activate(GtkApplication *app, gpointer user_data) {
    cout << "Activate function called" << endl;
    GtkWidget *window = gtk_application_window_new(app);
    GtkWidget *button = gtk_button_new_with_label("Hello, World!");

    gtk_window_set_child(GTK_WINDOW(window), button);
    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv) {
    cout << "Main function started" << endl;
    GtkApplication *app;
    int status;

    app = gtk_application_new("com.example.GtkApplication", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    cout << "Main function ended" << endl;
    return status;
}

#include <wx/image.h>
#include "Application.h"
#include "VentanaPrincipal.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	VentanaPrincipal *winPrincipal = new VentanaPrincipal(NULL);
	winPrincipal->Show();
	return true;
}


#pragma once

#include <map>
#include <string>

namespace YourNamespace {

    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;

    public ref class PageManager {
    public:
        static Dictionary<std::String^, Form^>^ Pages = gcnew Dictionary<std::String^, Form^>();
    };

} // Fin du namespace YourNamespace

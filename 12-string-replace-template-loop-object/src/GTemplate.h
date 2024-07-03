//===============================================
#pragma once
//===============================================
#include "GObject.h"
//===============================================
class GTemplate : public GObject {
public:
    GTemplate();
    GTemplate(const GString& _filename);
    GTemplate(const GTemplate& _obj);
    ~GTemplate();
    GTemplate parse();
    GTemplate render();
    void addReplaceArr(const GString& _key, const std::vector<GString>& _obj);
    void addReplaceObj(const GString& _key, const std::map<GString, GString>& _obj);

private:
    void parseInternal();
    void renderInternal();

public:
    void addReplaceData(const GString& _key, const GString& _value)     {m_replaceMap[_key] = _value;}
    void setFilename(const GString& _filename)                          {m_filename = _filename;}
    void setTemplateText(const GString& _templateText)                  {m_templateText = _templateText;}
    void setReplaceMap(const std::map<GString, GString>& _replaceMap)   {m_replaceMap = _replaceMap;}
    const GString& getTemplateText() const                              {return m_templateText;}

public:
    GTemplate& operator=(const GTemplate& _obj);

private:
    GString m_templateRoot;
    GString m_filename;
    GString m_templateText;
    std::map<GString, GString> m_replaceMap;
};
//===============================================

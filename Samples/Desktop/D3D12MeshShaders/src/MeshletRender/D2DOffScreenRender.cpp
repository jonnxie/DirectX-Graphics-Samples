#include "stdafx.h"
#include "D2DOffScreenRender.h"

D2DOffScreenRender::D2DOffScreenRender(
          std::pair<float, float> begin,
          std::pair<float, float> end,
          float glowSize,
          float strokeWidth
) :
   m_begin(begin),
   m_end(end),
   m_glowSize(glowSize),
   m_strokeWidth(strokeWidth) {
   CreateDeviceDependentResources();
   CreateWindowSizeDependentResources();
};
void D2DOffScreenRender::CreateDeviceDependentResources(){

}
void D2DOffScreenRender::CreateWindowSizeDependentResources(){

}
void D2DOffScreenRender::ReleaseDeviceDependentResources(){

}
void D2DOffScreenRender::Render(){

}
void D2DOffScreenRender::GetTexture(ID3D11Texture2D** texture) {

}
void D2DOffScreenRender::CreateEffect(){

}
void D2DOffScreenRender::CreateGeometry(){

}
void D2DOffScreenRender::CreateTargetBitmap() {

}

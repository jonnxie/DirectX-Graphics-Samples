#pragma once
#include "stdafx.h"

using namespace DirectX;
using Microsoft::WRL::ComPtr;

class D2DOffScreenRender
{
public:
   D2DOffScreenRender(
             std::pair<float, float> begin,
             std::pair<float, float> end,
             float glowSize,
             float strokeWidth
   );
   void CreateDeviceDependentResources();
   void CreateWindowSizeDependentResources();
   void ReleaseDeviceDependentResources();
   void Render();
   void GetTexture(ID3D12Resource** texture);
private:
   void CreateEffect();
   void CreateGeometry();
   void CreateTargetBitmap();

private:
    ComPtr<ID2D1Bitmap> m_targetAssociateBitmap;
    ComPtr<ID2D1BitmapRenderTarget> m_targetBitmap;
    std::pair<float, float> m_begin;
    std::pair<float, float> m_end;
    float m_glowSize;
    float m_strokeWidth;
    // Sample-specific resources.
    ComPtr<ID2D1SolidColorBrush> m_solidBrush;
    ComPtr<ID2D1SolidColorBrush> m_redSolidBrush;
    ComPtr<ID2D1DrawingStateBlock>  m_stateBlock;
    ComPtr<ID2D1Effect> m_glowEffect;
};


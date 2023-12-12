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
          //m_deviceResources->GetD2DDeviceContext()->CreateSolidColorBrush(D2D1::ColorF(D2D1::ColorF::Black), &m_solidBrush);
          //m_deviceResources->GetD2DDeviceContext()->CreateSolidColorBrush(D2D1::ColorF(D2D1::ColorF::Red), &m_redSolidBrush);

          //ComPtr<IWICBitmapDecoder> wicBitmapDecoder;
          //DX::ThrowIfFailed(
          //          m_deviceResources->GetWicImagingFactory()->CreateDecoderFromFilename(
          //                    L"Assets\\storelogo-sdk.png",
          //                    //L"Assets\\girl.png",
          //                    nullptr,
          //                    GENERIC_READ,
          //                    WICDecodeMetadataCacheOnDemand,
          //                    &wicBitmapDecoder
          //          )
          //);

          //ComPtr<IWICBitmapFrameDecode> wicBitmapFrame;
          //DX::ThrowIfFailed(
          //          wicBitmapDecoder->GetFrame(0, &wicBitmapFrame)
          //);

          //ComPtr<IWICFormatConverter> wicFormatConverter;
          //DX::ThrowIfFailed(
          //          m_deviceResources->GetWicImagingFactory()->CreateFormatConverter(&wicFormatConverter)
          //);

          //DX::ThrowIfFailed(
          //          wicFormatConverter->Initialize(
          //                    wicBitmapFrame.Get(),
          //                    GUID_WICPixelFormat32bppPBGRA,
          //                    WICBitmapDitherTypeNone,
          //                    nullptr,
          //                    0.0,
          //                    WICBitmapPaletteTypeCustom  // the BGRA format has no palette so this value is ignored
          //          )
          //);

          //double dpiX = 96.0;
          //double dpiY = 96.0;
          //DX::ThrowIfFailed(
          //          wicFormatConverter->GetResolution(&dpiX, &dpiY)
          //);

          //DX::ThrowIfFailed(
          //          m_deviceResources->GetD2DDeviceContext()->CreateBitmapFromWicBitmap(
          //                    wicFormatConverter.Get(),
          //                    BitmapProperties(
          //                              PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED),
          //                              static_cast<float>(dpiX),
          //                              static_cast<float>(dpiY)
          //                    ),
          //                    &m_sourceBitmap
          //          )
          //);

          //DX::ThrowIfFailed(
          //          m_deviceResources->GetD2DFactory()->CreateDrawingStateBlock(&m_stateBlock)
          //);

          //D2D1_BITMAP_PROPERTIES sourceBitmapProperties =
          //    D2D1::BitmapProperties(
          //        D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED),
          //        m_deviceResources->GetDPI(),
          //        m_deviceResources->GetDPI()
          //    );


          //DX::ThrowIfFailed(
          //    m_deviceResources->GetD2DDeviceContext()->CreateBitmap(
          //        D2D1_SIZE_U{ desc.BufferDesc.Width , desc.BufferDesc.Height },
          //        sourceBitmapProperties,
          //        &m_sourceBitmap
          //    )
          //);
          CreateTargetBitmap();
          CreateGeometry();
          CreateEffect();
}
void D2DOffScreenRender::CreateWindowSizeDependentResources(){

}
void D2DOffScreenRender::ReleaseDeviceDependentResources(){

}
void D2DOffScreenRender::Render(){

}
void D2DOffScreenRender::GetTexture(ID3D12Resource** texture) {

}
void D2DOffScreenRender::CreateEffect(){

}
void D2DOffScreenRender::CreateGeometry(){

}
void D2DOffScreenRender::CreateTargetBitmap() {

}

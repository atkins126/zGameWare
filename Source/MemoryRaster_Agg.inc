{ ****************************************************************************** }
{ * memory Rasterization                                                       * }
{ * by QQ 600585@qq.com                                                        * }
{ ****************************************************************************** }
{ * https://zpascal.net                                                        * }
{ * https://github.com/PassByYou888/zAI                                        * }
{ * https://github.com/PassByYou888/ZServer4D                                  * }
{ * https://github.com/PassByYou888/PascalString                               * }
{ * https://github.com/PassByYou888/zRasterization                             * }
{ * https://github.com/PassByYou888/CoreCipher                                 * }
{ * https://github.com/PassByYou888/zSound                                     * }
{ * https://github.com/PassByYou888/zChinese                                   * }
{ * https://github.com/PassByYou888/zExpression                                * }
{ * https://github.com/PassByYou888/zGameWare                                  * }
{ * https://github.com/PassByYou888/zAnalysis                                  * }
{ * https://github.com/PassByYou888/FFMPEG-Header                              * }
{ * https://github.com/PassByYou888/zTranslate                                 * }
{ * https://github.com/PassByYou888/InfiniteIoT                                * }
{ * https://github.com/PassByYou888/FastMD5                                    * }
{ ****************************************************************************** }
constructor TMemoryRaster_AggImage.Create(raster: TMemoryRaster);
begin
  inherited Create(PInt8u(raster.ScanLine[0]), raster.width, raster.height, 4 * raster.width);
end;

procedure TMemoryRaster_AggImage.Attach(raster: TMemoryRaster);
begin
  inherited Attach(PInt8u(raster.ScanLine[0]), raster.width, raster.height, 4 * raster.width);
end;

function TMemoryRaster_Agg2D.GetImageBlendColor: TRColor;
begin
  Result := AggColor(FImageBlendColor);
end;

procedure TMemoryRaster_Agg2D.SetImageBlendColor(const Value: TRColor);
begin
  inherited ImageBlendColor := AggColor(Value);
end;

function TMemoryRaster_Agg2D.GetFillColor: TRColor;
begin
  Result := AggColor(FFillColor);
end;

procedure TMemoryRaster_Agg2D.SetFillColor(const Value: TRColor);
begin
  inherited FillColor := AggColor(Value);
end;

function TMemoryRaster_Agg2D.GetLineColor: TRColor;
begin
  Result := AggColor(FLineColor);
end;

procedure TMemoryRaster_Agg2D.SetLineColor(const Value: TRColor);
begin
  inherited LineColor := AggColor(Value);
end;

procedure TMemoryRaster_Agg2D.Attach(raster: TMemoryRaster);
begin
  inherited Attach(PInt8u(raster.ScanLine[0]), raster.width, raster.height, 4 * raster.width);
end;

procedure TMemoryRaster_Agg2D.FillLinearGradient(x1, y1, x2, y2: Double; c1, c2: TRColor; Profile: Double);
begin
  inherited FillLinearGradient(x1, y1, x2, y2, AggColor(c1), AggColor(c2), Profile);
end;

procedure TMemoryRaster_Agg2D.LineLinearGradient(x1, y1, x2, y2: Double; c1, c2: TRColor; Profile: Double);
begin
  inherited LineLinearGradient(x1, y1, x2, y2, AggColor(c1), AggColor(c2), Profile);
end;

procedure TMemoryRaster_Agg2D.FillRadialGradient(x, y, r: Double; c1, c2: TRColor; Profile: Double);
begin
  inherited FillRadialGradient(x, y, r, AggColor(c1), AggColor(c2), Profile);
end;

procedure TMemoryRaster_Agg2D.LineRadialGradient(x, y, r: Double; c1, c2: TRColor; Profile: Double);
begin
  inherited LineRadialGradient(x, y, r, AggColor(c1), AggColor(c2), Profile);
end;

procedure TMemoryRaster_Agg2D.FillRadialGradient(x, y, r: Double; c1, c2, c3: TRColor);
begin
  inherited FillRadialGradient(x, y, r, AggColor(c1), AggColor(c2), AggColor(c3));
end;

procedure TMemoryRaster_Agg2D.LineRadialGradient(x, y, r: Double; c1, c2, c3: TRColor);
begin
  inherited LineRadialGradient(x, y, r, AggColor(c1), AggColor(c2), AggColor(c3));
end;

function WriteFile(FilePath, Contents)

	local Path = SELF:GetOption('TextPath')
	Contents = SELF:GetOption('Contents')
	FilePath = SKIN:MakePathAbsolute(Path)
	
	local File = io.open(FilePath, 'w')

	if not File then
		return
	end

	File:write('DO NOT REMOVE TEXT TAGS\n\n<text>' .. Contents .. '</text>')
	File:close()

	return true

end
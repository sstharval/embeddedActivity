DOXY_FILE = embeddedActivity
BUILD_FILE = html

FixPath = $(subst /,\,$1)

doc:
	doxygen -g ./$(DOXY_FILE)

clean:
	rm -rf $(call FixPath,$(BUILD_FILE)/*)
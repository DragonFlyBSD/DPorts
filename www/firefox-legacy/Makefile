
PORTNAME=	firefox
DISTVERSION=	52.8.0
DISTVERSIONSUFFIX=esr
CATEGORIES=	www
MASTER_SITES=	MOZILLA/${PORTNAME}/releases/${DISTVERSION}esr/source \
		MOZILLA/${PORTNAME}/candidates/${DISTVERSION}esr-candidates/build1/source
PKGNAMESUFFIX=	-legacy
DISTFILES=	${DISTNAME}.source${EXTRACT_SUFX}

MAINTAINER=	zrj@ef.irc
COMMENT=	Web browser based on the browser portion of Mozilla (last gtk2 version)

BUILD_DEPENDS=	nspr>=4.13.1:devel/nspr \
		nss>=3.28.6:security/nss \
		libevent>=2.0.21_2:devel/libevent \
		harfbuzz>=1.4.1:print/harfbuzz \
		graphite2>=1.3.10:graphics/graphite2 \
		png>=1.6.25:graphics/png \
		libvorbis>=1.3.5,3:audio/libvorbis \
		libvpx>=1.5.0:multimedia/libvpx \
		sqlite3>=3.17.0:databases/sqlite3 \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR} \
		v4l_compat>0:multimedia/v4l_compat \
		autoconf-2.13:devel/autoconf213 \
		yasm:devel/yasm \
		zip:archivers/zip
#		soundtouch>=1.9.0:audio/soundtouch \

LIB_DEPENDS=	libevent.so:devel/libevent libffi.so:devel/libffi libexpat.so:textproc/expat2 \
		libicui18n.so:devel/icu libnspr4.so:devel/nspr libnss3.so:security/nss \
		libgraphite2.so:graphics/graphite2 libharfbuzz.so:print/harfbuzz \
		libfontconfig.so:x11-fonts/fontconfig libfreetype.so:print/freetype2 \
		libv4l2.so:multimedia/libv4l libasound.so:audio/alsa-lib \
		libpixman-1.so:x11/pixman libjpeg.so:graphics/jpeg-turbo libpng.so:graphics/png \
		libicui18n.so:devel/icu libwebp.so:graphics/webp libvpx.so:multimedia/libvpx
RUN_DEPENDS+=	alsa-plugins>0:audio/alsa-plugins ffmpeg>0:multimedia/ffmpeg

##USE_GECKO=	gecko
CPE_PRODUCT=	${PORTNAME}_legacy
CONFLICTS_INSTALL=	firefox firefox-esr
MOZ_PKGCONFIG_FILES=	# empty
MOZILLA_NAME=	Firefox

USE_GL=		gl
USE_GNOME=	cairo gdkpixbuf2 gtk20
USE_XORG=	x11 xcb xcomposite xdamage xext xfixes xrender xt xxf86vm
USES=		cpe desktop-file-utils gnome gmake gl iconv localbase perl5 pkgconfig python:2.7,build sqlite tar:xz xorg

HAS_CONFIGURE=	yes
CONFIGURE_OUTSOURCE=	yes

PREFIX?=	/usr/local
LOCALBASE?=	/usr/local

FIREFOX_ICON=		${MOZILLA}.png
FIREFOX_ICON_SRC=	${PREFIX}/lib/firefox/browser/chrome/icons/default/default48.png
MOZ_OPTIONS=	--enable-application=browser \
		--enable-official-branding \
		--prefix="${PREFIX}"  \
		--with-system-libevent --enable-system-ffi --with-system-graphite2 \
		--with-system-harfbuzz --with-system-icu --with-intl-api \
		--with-system-jpeg=${LOCALBASE} \
		--with-system-nspr --with-system-nss --with-system-png=${LOCALBASE} \
		--enable-system-pixman --enable-system-sqlite --with-system-libvpx \
		--enable-update-channel=legacy  --disable-updater \
		--with-system-zlib  --with-system-bz2 \
		--enable-optimize --disable-rust --disable-profiling \
		--disable-dbus --disable-gconf --disable-libproxy \
		--enable-alsa --disable-pulseaudio --disable-jemalloc \
		--disable-debug --disable-debug-symbols --enable-release \
		--disable-tests --disable-strip --disable-install-strip

MOZ_CHROME?=	omni
MOZ_TOOLKIT?=	cairo-gtk2
MOZ_CHANNEL?=	esr
MOZ_OPTIONS+=	--enable-chrome-format=${MOZ_CHROME} \
		--enable-default-toolkit=${MOZ_TOOLKIT} \
		--with-pthreads

MOZILLA?=	${PORTNAME}
MOZILLA_VER?=	${PORTNAME}
MOZILLA_BIN?=	${PORTNAME}-bin
MOZILLA_EXEC?=	${MOZILLA}
MOZ_RPATH?=	${MOZILLA}

MOZILLA_SUFX?=	none
MOZSRC?= ${WRKSRC}
PLISTF?= ${WRKDIR}/plist_files

MOZ_PIS_DIR?=  lib/${MOZILLA}/init.d

PORT_MOZCONFIG?= ${FILESDIR}/mozconfig.in
MOZCONFIG?=  ${WRKSRC}/.mozconfig
MOZILLA_PLIST_DIRS?= bin lib share/pixmaps share/applications
PKGINSTALL?= ${WRKDIR}/pkg-install
PKGDEINSTALL?= ${WRKDIR}/pkg-deinstall
PKGINSTALL_INC?= ${.CURDIR}/files/pkg-install.in
PKGDEINSTALL_INC?= ${.CURDIR}/files/pkg-deinstall.in

MOZ_PKGCONFIG_FILES?= ${MOZILLA}-gtkmozembed ${MOZILLA}-js ${MOZILLA}-xpcom ${MOZILLA}-plugin

MOZ_EXPORT+= ${CONFIGURE_ENV} PERL="${PERL}"
MOZ_OPTIONS+= --prefix="${PREFIX}"
MOZ_MK_OPTIONS+=MOZ_OBJDIR="${BUILD_WRKSRC}"

# reduce some noise
CXXFLAGS+=	-Wno-class-memaccess -Wno-ignored-qualifiers -Wno-maybe-uninitialized \
		-Wno-multistatement-macros -Wno-deprecated -Wno-implicit-fallthrough \
		-Wno-misleading-indentation -Wno-unused-variable -Wno-format-truncation \
		-Wno-unused-variable -Wno-unused-local-typedefs
LDFLAGS+=	-Wl,--as-needed

MOZ_SED_ARGS+=	-e 's|@CPPFLAGS@|${CPPFLAGS}|g'  \
		-e 's|@CFLAGS@|${CFLAGS}|g'  \
		-e 's|@LDFLAGS@|${LDFLAGS}|g'  \
		-e 's|@LIBS@|${LIBS}|g'   \
		-e 's|@LOCALBASE@|${LOCALBASE}|g' \
		-e 's|@PERL@|${PERL}|g'   \
		-e 's|@MOZDIR@|${PREFIX}/lib/${MOZILLA}|g' \
		-e 's|%%PREFIX%%|${PREFIX}|g'  \
		-e 's|%%CFLAGS%%|${CFLAGS}|g'  \
		-e 's|%%LDFLAGS%%|${LDFLAGS}|g'  \
		-e 's|%%LIBS%%|${LIBS}|g'  \
		-e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		-e 's|%%PERL%%|${PERL}|g'  \
		-e 's|%%MOZILLA%%|${MOZILLA}|g'  \
		-e 's|%%MOZILLA_BIN%%|${MOZILLA_BIN}|g' \
		-e 's|%%MOZDIR%%|${PREFIX}/lib/${MOZILLA}|g'
MOZCONFIG_SED?= ${SED} ${MOZ_SED_ARGS}

dfly-patch:
.if exists(${PKGINSTALL_INC})
	@${MOZCONFIG_SED} < ${PKGINSTALL_INC} > ${PKGINSTALL}
.endif
.if exists(${PKGDEINSTALL_INC})
	@${MOZCONFIG_SED} < ${PKGDEINSTALL_INC} > ${PKGDEINSTALL}
.endif
	@${RM} ${MOZCONFIG}
.if !defined(NOMOZCONFIG)
	@if [ -e ${PORT_MOZCONFIG} ] ; then \
	${MOZCONFIG_SED} < ${PORT_MOZCONFIG} >> ${MOZCONFIG} ; \
	fi
.for arg in ${MOZ_OPTIONS}
	@${ECHO_CMD} ac_add_options ${arg:Q} >> ${MOZCONFIG}
.endfor
.for arg in ${MOZ_MK_OPTIONS}
	@${ECHO_CMD} mk_add_options ${arg:Q} >> ${MOZCONFIG}
.endfor
.for var in ${MOZ_EXPORT}
	@${ECHO_CMD} export ${var:Q} >> ${MOZCONFIG}
.endfor
.endif # .if !defined(NOMOZCONFIG)
.if exists(${MOZSRC}/build/unix/mozilla-config.in)
	@${REINPLACE_CMD} -e  's/%{idldir}/%idldir%/g ; \
		s|"%FULL_NSPR_CFLAGS%"|`nspr-config --cflags`|g ; \
		s|"%FULL_NSPR_LIBS%"|`nspr-config --libs`|g' \
		${MOZSRC}/build/unix/mozilla-config.in
.endif

post-extract:
	@${SED} -e 's|@FIREFOX_ICON@|${FIREFOX_ICON}|' -e 's|@MOZILLA@|${MOZILLA}|' \
		-e 's|@MOZILLA_NAME@|${MOZILLA_NAME}|' \
		<${FILESDIR}/firefox.desktop.in >${WRKDIR}/${MOZILLA}.desktop

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/browser/app/nsBrowserApp.cpp

pre-configure:
	(cd ${WRKSRC} && ${LOCALBASE}/bin/autoconf-2.13)
	(cd ${WRKSRC}/js/src/ && ${LOCALBASE}/bin/autoconf-2.13)

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKDIR}/${MOZILLA}.desktop ${STAGEDIR}${PREFIX}/share/applications/
	${LN} -sf ${FIREFOX_ICON_SRC} ${STAGEDIR}${PREFIX}/share/pixmaps/${FIREFOX_ICON}

post-install-script: gecko-create-plist

gecko-create-plist:
	# Create the plist
	${RM} ${PLISTF}
.for dir in ${MOZILLA_PLIST_DIRS}
	@cd ${STAGEDIR}${PREFIX}/${dir} && ${FIND} -H -s * ! -type d | \
		${SED} -e 's|^|${dir}/|' >> ${PLISTF}
.endfor
	${CAT} ${PLISTF} | ${SORT} >> ${TMPPLIST}

.include <bsd.port.mk>

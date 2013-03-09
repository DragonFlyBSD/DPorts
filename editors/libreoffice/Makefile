# $FreeBSD: ports/editors/libreoffice/Makefile,v 1.77 2013/02/08 08:08:41 svnexp Exp $

.include "${.CURDIR}/Makefile.common"

PORTREVISION=	2

MASTER_SITE_SUBDIR=	src/${PORTVERSION}/
MASTER_SITES+=	http://dev-www.libreoffice.org/src/:src \
		http://dev-www.libreoffice.org/extern/:ext

COMMENT=	Full integrated office productivity suite

BUILD_DEPENDS=	zip:${PORTSDIR}/archivers/zip \
		gpatch:${PORTSDIR}/devel/patch \
		gtar:${PORTSDIR}/archivers/gtar \
		${LOCALBASE}/lib/libcppunit.so:${PORTSDIR}/devel/cppunit \
		unzip:${PORTSDIR}/archivers/unzip \
		bash:${PORTSDIR}/shells/bash \
		p5-Archive-Zip>=0:${PORTSDIR}/archivers/p5-Archive-Zip \
		${LOCALBASE}/bin/gperf:${PORTSDIR}/devel/gperf \
		sane-backends>=1.0.23:${PORTSDIR}/graphics/sane-backends \
		${LOCALBASE}/lib/libboost_regex.a:${PORTSDIR}/devel/boost-libs \
		${LOCALBASE}/include/mdds/global.hpp:${PORTSDIR}/devel/mdds \
		vigra-config:${PORTSDIR}/graphics/vigra

LIB_DEPENDS=	cairo.2:${PORTSDIR}/graphics/cairo \
		cdr:${PORTSDIR}/graphics/libcdr \
		clucene-core:${PORTSDIR}/textproc/clucene \
		xml2.5:${PORTSDIR}/textproc/libxml2 \
		xslt.2:${PORTSDIR}/textproc/libxslt \
		expat.6:${PORTSDIR}/textproc/expat2 \
		icutu:${PORTSDIR}/devel/icu \
		jpeg.11:${PORTSDIR}/graphics/jpeg \
		curl.6:${PORTSDIR}/ftp/curl \
		hunspell-1.3.0:${PORTSDIR}/textproc/hunspell \
		mythes-1.2.0:${PORTSDIR}/textproc/mythes \
		odbc.2:${PORTSDIR}/databases/unixODBC \
		rsvg-2.2:${PORTSDIR}/graphics/librsvg2 \
		hyphen.2:${PORTSDIR}/textproc/hyphen \
		poppler-glib.8:${PORTSDIR}/graphics/poppler-glib \
		wpd-0.9.9:${PORTSDIR}/textproc/libwpd \
		wpg-0.2.2:${PORTSDIR}/graphics/libwpg \
		wps-0.2.2:${PORTSDIR}/textproc/libwps \
		rdf.0:${PORTSDIR}/textproc/redland \
		exttextcat-2.0.0:${PORTSDIR}/textproc/libexttextcat \
		lpsolve55:${PORTSDIR}/math/lp_solve \
		cups.2:${PORTSDIR}/print/cups-client \
		visio-0.0.0:${PORTSDIR}/textproc/libvisio \
		graphite2:${PORTSDIR}/graphics/graphite2 \
		nss3.1:${PORTSDIR}/security/nss \
		SampleICC.2:${PORTSDIR}/graphics/sampleicc \
		gtk-x11-2.0.0:${PORTSDIR}/x11-toolkits/gtk20 \
		png15:${PORTSDIR}/graphics/png

RUN_DEPENDS=	${LOCALBASE}/lib/X11/fonts/Liberation/LiberationMono-Bold.ttf:${PORTSDIR}/x11-fonts/liberation-fonts-ttf \
		${LOCALBASE}/lib/X11/fonts/LinLibertineG/LinLibertine_DR_G.ttf:${PORTSDIR}/x11-fonts/linuxlibertine-g \
		${LOCALBASE}/lib/X11/fonts/dejavu/DejaVuSans.ttf:${PORTSDIR}/x11-fonts/dejavu \
		${LOCALBASE}/lib/X11/fonts/GentiumBasic/GenBasI.ttf:${PORTSDIR}/x11-fonts/gentium-basic

CONFLICTS_BUILD=	libcmis-[0-9]*
CONFLICTS_INSTALL=	libreoffice-legacy-[0-9]*

#LO_COMPONENTS=	binfilter dictionaries help translations
LO_COMPONENTS=	help

USE_GCC=	4.7
USE_XZ=	yes
USE_PYTHON=	yes

DIST_SUBDIR=	libreoffice
WRKSRC=		${WRKDIR}/${PORTNAME}-core-${LOVERSION}

LODESTDIR=	${WRKDIR}/loinstall

DISTFILES+=	${PORTNAME}-core-${LOVERSION}${EXTRACT_SUFX}
.for components in ${LO_COMPONENTS}
DISTFILES+=	${PORTNAME}-${components}-${LOVERSION}${EXTRACT_SUFX}
.endfor

EXTRACT_ONLY:=	${DISTFILES}

DISTFILES+=	0d2dcdfbf28d6208751b33057f5361f0-libcmis-0.2.3.tar.gz:src \
		1f24ab1d39f4a51faf22244c94a6203f-xmlsec1-1.2.14.tar.gz:src

USE_AUTOTOOLS=	autoconf aclocal
USE_BDB=	yes
USE_PERL5_BUILD=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_BISON=	build

USE_XORG=	xaw xrandr
MAKE_JOBS_SAFE=	yes
USE_GETTEXT=	yes
USE_PKGCONFIG=	build

OPTIONS_DEFINE=	MMEDIA

MMEDIA_DESC=	Enable multimedia backend for impress

CONFIGURE_ENV=		GPERF=${LOCALBASE}/bin/gperf


CONFIGURE_ARGS+=	--disable-epm \
			--disable-ext-presenter-console \
			--disable-fetch-external \
			--disable-gconf \
			--disable-gnome-vfs \
			--disable-mozilla \
			--disable-neon \
			--disable-odk \
			--disable-online-update \
			--disable-opengl \
			--disable-postgresql-sdbc \
			--disable-strip-solver \
			--disable-systray

CONFIGURE_ARGS+=	--exec-prefix=${PREFIX} \
			--mandir=${PREFIX}/man

CONFIGURE_ARGS+=	--with-alloc=system \
			--with-build-version="FreeBSD ports ${PKGVERSION}" \
			--with-external-tar=${DISTDIR}/${DIST_SUBDIR} \
			--with-external-thes-dir=${LOCALBASE}/share/mythes \
			--with-external-hyph-dir=${LOCALBASE}/share/hyphen \
			--with-external-dict-dir=${LOCALBASE}/share/hunspell \
			--with-gnu-patch=${LOCALBASE}/bin/gpatch \
			--with-num-cpus=${MAKE_JOBS_NUMBER} \
			--with-system-headers \
			--with-system-libs \
			--with-unix-wrapper="libreoffice" \
			--with-vendor="DragonFly dports"

CONFIGURE_ARGS+=	--without-afms \
			--without-fonts \
			--without-java \
			--without-myspell-dicts \
			--without-ppds \
			--without-system-altlinuxhyph	\
			--without-system-jars \
			--without-system-libcmis	\
			--without-system-mozilla-headers \
			--without-system-sampleicc


MAN1=	lobase.1 \
	lomath.1 \
	loffice.1 \
	localc.1 \
	unopkg.1 \
	loweb.1 \
	lowriter.1 \
	libreoffice.1 \
	lodraw.1 \
	lofromtemplate.1 \
	loimpress.1

MANCOMPRESSED=	yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MMMEDIA}
USE_GSTREAMER=	yes
CONFIGURE_ARGS+=	--enable-gstreamer
.else
CONFIGURE_ARGS+=	--disable-gstreamer
.endif


.include <bsd.port.pre.mk>


CPPFLAGS=	-I${LOCALBASE}/include -I${LOCALBASE}/include/db${BDB_VER}
LDFLAGS=	-L${LOCALBASE}/lib

MAKE_ENV+=	ENVCFLAGS="${CFLAGS}" ENVCXXFLAGS="${CXXFLAGS}"
MAKE_ENV+=	ENVLINKFLAGS="${LDFLAGS}"
MAKE_ENV+=	USE_GMAKE=1

post-extract:
	@${MKDIR} ${WRKSRC}/clone
	@${MKDIR} ${WRKSRC}/src
.for component in ${LO_COMPONENTS}
	@${MV} ${WRKDIR}/${PORTNAME}-${component}-${LOVERSION} ${WRKSRC}/clone/${component}
.endfor
	@${TOUCH} ${WRKSRC}/clone/repos_changed

do-configure:
	cd ${WRKSRC} && ./autogen.sh ${CONFIGURE_ARGS}

post-configure:
	@cd ${WRKSRC} && ./bin/create_bootstrap_links
	@${TOUCH} ${WRKSRC}/src.downloaded

do-install:
	@cd ${WRKSRC} && ${SETENV} DESTDIR="${LODESTDIR}" \
	    ${GMAKE} distro-pack-install

post-install:
	@${RM} -f ${PLISTF} ${PLISTD}
	# It seems that the empty directories are necessary for libreoffice keep them for now
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -d lib/libreoffice -type d -empty \
		-exec ${ECHO_CMD} "@exec ${MKDIR} %D/{}" \; >> ${PLISTD}

	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -H -s lib \( -type f -o -type l \) -print >> ${PLISTF}
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -d lib/libreoffice -type d -exec ${ECHO_CMD} "@dirrm {}" \; >> ${PLISTD}

.for subdir in applications icons mime mimelnk
	@cd ${LODESTDIR}/${PREFIX} && ${FIND}  -H -s share/${subdir} \( -type f -o -type l \) -print >> ${PLISTF}
	@cd ${LODESTDIR}/${PREFIX}/ && ${FIND} -d share/${subdir} -type d \
		-exec ${ECHO_CMD} "@unexec ${RMDIR} %D/{} 2>/dev/null || ${TRUE}" \; >> ${PLISTD}
.endfor
# do not add the subdir itself as dirrmtry
.for subdir in application-registry mime-info
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -H -s share/${subdir} \( -type f -o -type l \) -print >> ${PLISTF}
	@cd ${LODESTDIR}/${PREFIX}/ && ${FIND} -d share/${subdir}/* -type d \
		-exec ${ECHO_CMD} "@unexec ${RMDIR} %D/{} 2>/dev/null || ${TRUE}" \; >> ${PLISTD}
.endfor
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -H -s bin \( -type f -o -type l \) -print >> ${PLISTF}

	@${SORT} ${PLISTF} >> ${TMPPLIST}
	@${GREP} ^@exec ${PLISTD} | ${SORT} >> ${TMPPLIST}
	@${GREP} -v ^@exec ${PLISTD} | ${SORT} -r >> ${TMPPLIST}

	@cd ${LODESTDIR}/${PREFIX} ; ${PAX} -rw . ${PREFIX}

.include <bsd.port.post.mk>

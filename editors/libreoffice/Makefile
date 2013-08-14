# $FreeBSD: editors/libreoffice/Makefile 324231 2013-08-04 13:18:24Z az $

.include "${.CURDIR}/Makefile.common"

PORTREVISION=	1
MASTER_SITES+=	http://dev-www.libreoffice.org/src/:src \
		http://dev-www.libreoffice.org/extern/:ext
MASTER_SITE_SUBDIR=	src/${PORTVERSION}/

COMMENT=	Full integrated office productivity suite

BUILD_DEPENDS=	p5-Archive-Zip>=0:${PORTSDIR}/archivers/p5-Archive-Zip \
		unzip:${PORTSDIR}/archivers/unzip \
		zip:${PORTSDIR}/archivers/zip \
		${LOCALBASE}/lib/libboost_regex.a:${PORTSDIR}/devel/boost-libs \
		${LOCALBASE}/lib/libcppunit.so:${PORTSDIR}/devel/cppunit \
		dmake:${PORTSDIR}/devel/dmake \
		${LOCALBASE}/bin/gperf:${PORTSDIR}/devel/gperf \
		${LOCALBASE}/include/mdds/global.hpp:${PORTSDIR}/devel/mdds \
		gpatch:${PORTSDIR}/devel/patch \
		sane-backends>=1.0.23:${PORTSDIR}/graphics/sane-backends \
		ucpp:${PORTSDIR}/devel/ucpp \
		vigra-config:${PORTSDIR}/graphics/vigra \
		bash:${PORTSDIR}/shells/bash \
		gsed:${PORTSDIR}/textproc/gsed

LIB_DEPENDS=	icutu:${PORTSDIR}/devel/icu \
		langtag:${PORTSDIR}/devel/liblangtag \
		orcus-0.6:${PORTSDIR}/devel/liborcus \
		curl:${PORTSDIR}/ftp/curl \
		cairo.2:${PORTSDIR}/graphics/cairo \
		graphite2:${PORTSDIR}/graphics/graphite2 \
		jpeg.11:${PORTSDIR}/graphics/jpeg \
		cdr:${PORTSDIR}/graphics/libcdr \
		lcms2:${PORTSDIR}/graphics/lcms2 \
		wpg-0.2.2:${PORTSDIR}/graphics/libwpg \
		png15:${PORTSDIR}/graphics/png \
		poppler:${PORTSDIR}/graphics/poppler \
		lpsolve55:${PORTSDIR}/math/lp_solve \
		cmis-0.3:${PORTSDIR}/net/libcmis \
		ldap-2.4:${PORTSDIR}/net/openldap24-client \
		mspub-0.0:${PORTSDIR}/print/libmspub \
		nss3.1:${PORTSDIR}/security/nss \
		clucene-core:${PORTSDIR}/textproc/clucene \
		expat.6:${PORTSDIR}/textproc/expat2 \
		hunspell-1.3.0:${PORTSDIR}/textproc/hunspell \
		hyphen.2:${PORTSDIR}/textproc/hyphen \
		exttextcat-2.0.0:${PORTSDIR}/textproc/libexttextcat \
		visio-0.0.0:${PORTSDIR}/textproc/libvisio \
		xml2.5:${PORTSDIR}/textproc/libxml2 \
		xslt.2:${PORTSDIR}/textproc/libxslt \
		wpd-0.9.9:${PORTSDIR}/textproc/libwpd \
		wps-0.2.2:${PORTSDIR}/textproc/libwps \
		mythes-1.2.0:${PORTSDIR}/textproc/mythes \
		cups:${PORTSDIR}/print/cups-client \
		rdf.0:${PORTSDIR}/textproc/redland

RUN_DEPENDS=	${LOCALBASE}/lib/X11/fonts/dejavu/DejaVuSans.ttf:${PORTSDIR}/x11-fonts/dejavu \
		${LOCALBASE}/lib/X11/fonts/GentiumBasic/GenBasI.ttf:${PORTSDIR}/x11-fonts/gentium-basic \
		${LOCALBASE}/lib/X11/fonts/Liberation/LiberationMono-Bold.ttf:${PORTSDIR}/x11-fonts/liberation-fonts-ttf \
		${LOCALBASE}/lib/X11/fonts/LinLibertineG/LinLibertine_DR_G.ttf:${PORTSDIR}/x11-fonts/linuxlibertine-g

CONFLICTS_INSTALL=	libreoffice-legacy-[0-9]*

_MAKE_JOBS=	#
MAKE_JOBS_SAFE=	yes

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	autoconf aclocal
USE_GCC=	4.7
USE_GMAKE=	yes
USE_PERL5=	build
USE_PYTHON=	3.3+
USE_QT4=	# empty but required
USE_XORG=	xaw xrandr
USE_XZ=		yes
USES=		bison pkgconfig perl5
USE_GNOME+=	gtk20 desktopfileutils
INSTALLS_ICONS= yes

DISTFILES+=	${PORTNAME}-${LOVERSION}${EXTRACT_SUFX}
DISTFILES+=	${PORTNAME}-help-${LOVERSION}${EXTRACT_SUFX}

EXTRACT_ONLY:=	${DISTFILES}

DISTFILES+=	1f24ab1d39f4a51faf22244c94a6203f-xmlsec1-1.2.14.tar.gz:src

DIST_SUBDIR=	libreoffice
LODESTDIR=	${WRKDIR}/loinstall
WRKSRC=		${WRKDIR}/${PORTNAME}-${LOVERSION}

CONFIGURE_ENV=		DMAKE=${LOCALBASE}/bin/dmake \
			GPERF=${LOCALBASE}/bin/gperf \
			PYTHON_CFLAGS="`${PYTHON_VERSION}-config --cflags`" \
			PYTHON_LIBS="`${PYTHON_VERSION}-config --libs`" \
			TMPDIR=${WRKDIR}

CONFIGURE_ARGS+=	--disable-dbus \
			--disable-epm \
			--disable-fetch-external \
			--disable-gconf \
			--disable-gio \
			--disable-gnome-vfs \
			--disable-gstreamer-0.10 \
			--disable-gtk3 \
			--disable-linkoo \
			--disable-lockdown \
			--disable-neon \
			--disable-odk \
			--disable-online-update \
			--disable-opengl \
			--disable-postgresql-sdbc \
			--disable-systray \
			--disable-zenity

CONFIGURE_ARGS+=	--exec-prefix=${PREFIX} \
			--mandir=${PREFIX}/man

CONFIGURE_ARGS+=	--with-alloc=system \
			--with-build-version="FreeBSD ports ${PKGVERSION}" \
			--with-external-dict-dir=${LOCALBASE}/share/hunspell \
			--with-external-hyph-dir=${LOCALBASE}/share/hyphen \
			--with-external-thes-dir=${LOCALBASE}/share/mythes \
			--with-external-tar=${DISTDIR}/${DIST_SUBDIR} \
			--with-gnu-patch=${LOCALBASE}/bin/gpatch \
			--with-os-version=${DFLYVERSION} \
			--with-parallelism=${MAKE_JOBS_NUMBER} \
			--with-system-headers \
			--with-system-libs \
			--with-system-ucpp \
			--with-unix-wrapper="libreoffice" \
			--with-vendor="DragonFly dports"

CONFIGURE_ARGS+=	--enable-cairo-canvas \
			--enable-cups \
			--enable-graphite \
			--enable-gtk \
			--enable-python=system

CONFIGURE_ARGS+=	--without-afms \
			--without-fonts \
			--without-java \
			--without-myspell-dicts \
			--without-ppds \
			--without-system-odbc \
			--without-system-jars \
			--without-system-npapi-headers \
			--without-system-mozilla

MAN1=	libreoffice.1 \
	lobase.1 \
	localc.1 \
	lodraw.1 \
	loffice.1 \
	lofromtemplate.1 \
	loimpress.1 \
	lomath.1 \
	loweb.1 \
	lowriter.1 \
	unopkg.1

MANCOMPRESSED=	yes

.include <bsd.port.pre.mk>

ACLOCAL_ARGS=	-I "${WRKSRC}/m4"
CPPFLAGS=	-I${LOCALBASE}/include
LDFLAGS=	-L${LOCALBASE}/lib

MAKE_ENV+=	ENVCFLAGS="${CFLAGS}" ENVCXXFLAGS="${CXXFLAGS}"
MAKE_ENV+=	ENVLINKFLAGS="${LDFLAGS}"
MAKE_ENV+=	LANG=C LC_ALL=C
MAKE_ENV+=	SED="${LOCALBASE}/bin/gsed" USE_GMAKE=1

pre-configure:
	@${TOUCH} ${WRKSRC}/autogen.lastrun

post-configure:
	@${TOUCH} ${WRKSRC}/src.downloaded

do-install:
	@cd ${WRKSRC} && ${SETENV} DESTDIR="${LODESTDIR}" \
	    ${GMAKE} distro-pack-install

post-install:
	@${RM} -f ${PLISTF} ${PLISTD}
	# It seems that the empty directories are necessary for libreoffice keep them for now
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -d lib/libreoffice -type d \
	    -empty -exec ${ECHO_CMD} "@exec ${MKDIR} %D/{}" \; >> ${PLISTD}

	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -H -s bin lib \
	    \( -type f -o -type l \) -print >> ${PLISTF}
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -d lib/libreoffice -type d \
	    -exec ${ECHO_CMD} "@dirrm {}" \; >> ${PLISTD}

	@${ECHO_CMD} etc/bash_completion.d/libreoffice.sh >> ${PLISTF}
	@${ECHO_CMD} "@dirrmtry etc/bash_completion.d" >> ${PLISTD}

.for subdir in applications icons mime mimelnk
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -H -s share/${subdir} \
	    \( -type f -o -type l \) -print >> ${PLISTF}
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -d share/${subdir} -type d \
	    -exec ${ECHO_CMD} "@dirrmtry {}" \; >> ${PLISTD}
.endfor
# do not add the subdir itself as dirrmtry
.for subdir in application-registry mime-info
	@cd ${LODESTDIR}/${PREFIX} && ${FIND} -H -s share/${subdir} \
	    \( -type f -o -type l \) -print >> ${PLISTF}
.endfor


	@${SORT} -u ${PLISTF} >> ${TMPPLIST}
	@${GREP} '^@exec ' ${PLISTD} | ${SORT} -u >> ${TMPPLIST}
	@${GREP} '^@dirrm ' ${PLISTD} | ${SORT} -ru >> ${TMPPLIST}
	@${GREP} '^@dirrmtry ' ${PLISTD} | ${SORT} -ru | \
	    ${SED} -e '${PLIST_REINPLACE_DIRRMTRY}' >> ${TMPPLIST}

	@cd ${LODESTDIR}/${PREFIX} ; ${PAX} -rw . ${PREFIX}
	@${MKDIR} ${PREFIX}/etc/bash_completion.d
	@${INSTALL_SCRIPT} ${LODESTDIR}/etc/bash_completion.d/libreoffice.sh \
	    ${PREFIX}/etc/bash_completion.d

.include <bsd.port.post.mk>

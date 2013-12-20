# $FreeBSD: editors/libreoffice/Makefile 332185 2013-10-30 22:33:22Z jkim $

.include "${.CURDIR}/Makefile.common"

PORTREVISION=	1

COMMENT=	Full integrated office productivity suite

BUILD_DEPENDS=	p5-Archive-Zip>=0:${PORTSDIR}/archivers/p5-Archive-Zip \
		unzip:${PORTSDIR}/archivers/unzip \
		zip:${PORTSDIR}/archivers/zip \
		${LOCALBASE}/lib/libboost_regex.a:${PORTSDIR}/devel/boost-libs \
		${LOCALBASE}/lib/libcppunit.so:${PORTSDIR}/devel/cppunit \
		dmake:${PORTSDIR}/devel/dmake \
		${LOCALBASE}/bin/gperf:${PORTSDIR}/devel/gperf \
		mdds>=0.9.0:${PORTSDIR}/devel/mdds \
		gpatch:${PORTSDIR}/devel/patch \
		sane-backends>=1.0.23:${PORTSDIR}/graphics/sane-backends \
		ucpp:${PORTSDIR}/devel/ucpp \
		vigra-config:${PORTSDIR}/graphics/vigra \
		bash:${PORTSDIR}/shells/bash \
		gsed:${PORTSDIR}/textproc/gsed

LIB_DEPENDS=	libicutu.so:${PORTSDIR}/devel/icu \
		liblangtag.so:${PORTSDIR}/devel/liblangtag \
		liborcus-0.6.so:${PORTSDIR}/devel/liborcus \
		libcurl.so:${PORTSDIR}/ftp/curl \
		libcairo.so:${PORTSDIR}/graphics/cairo \
		libgraphite2.so:${PORTSDIR}/graphics/graphite2 \
		libjpeg.so:${PORTSDIR}/graphics/jpeg \
		libcdr-0.0.so:${PORTSDIR}/graphics/libcdr \
		liblcms2.so:${PORTSDIR}/graphics/lcms2 \
		libwpg-0.2.so:${PORTSDIR}/graphics/libwpg \
		libpng15.so:${PORTSDIR}/graphics/png \
		libpoppler.so:${PORTSDIR}/graphics/poppler \
		liblpsolve55.so:${PORTSDIR}/math/lp_solve \
		libcmis-0.4.so:${PORTSDIR}/net/libcmis \
		ldap-2.4.so:${PORTSDIR}/net/openldap24-client \
		libmspub-0.0.so:${PORTSDIR}/print/libmspub \
		libnss3.so:${PORTSDIR}/security/nss \
		libclucene-core.so:${PORTSDIR}/textproc/clucene \
		libexpat.so:${PORTSDIR}/textproc/expat2 \
		libhunspell-1.3.so:${PORTSDIR}/textproc/hunspell \
		libhyphen.so:${PORTSDIR}/textproc/hyphen \
		libexttextcat-2.0.so:${PORTSDIR}/textproc/libexttextcat \
		libvisio-0.0.so:${PORTSDIR}/textproc/libvisio \
		libxml2.so:${PORTSDIR}/textproc/libxml2 \
		libxslt.so:${PORTSDIR}/textproc/libxslt \
		libwpd-0.9.so:${PORTSDIR}/textproc/libwpd \
		libwps-0.2.so:${PORTSDIR}/textproc/libwps \
		libmythes-1.2.so:${PORTSDIR}/textproc/mythes \
		cups.so:${PORTSDIR}/print/cups-client \
		librdf.so:${PORTSDIR}/textproc/redland

RUN_DEPENDS=	${LOCALBASE}/lib/X11/fonts/dejavu/DejaVuSans.ttf:${PORTSDIR}/x11-fonts/dejavu \
		${LOCALBASE}/lib/X11/fonts/GentiumBasic/GenBasI.ttf:${PORTSDIR}/x11-fonts/gentium-basic \
		${LOCALBASE}/lib/X11/fonts/Liberation/LiberationMono-Bold.ttf:${PORTSDIR}/x11-fonts/liberation-fonts-ttf \
		${LOCALBASE}/lib/X11/fonts/LinLibertineG/LinLibertine_DR_G.ttf:${PORTSDIR}/x11-fonts/linuxlibertine-g

CONFLICTS_INSTALL=	libreoffice-legacy-[0-9]*

_MAKE_JOBS=	#

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	autoconf aclocal
USE_GCC=	yes
USE_PERL5=	build
USE_PYTHON=	yes
USE_QT4=	# empty but required
USE_XORG=	xaw xrandr
USE_XZ=		yes
USES=		bison compiler:c++11-lang gmake perl5 pkgconfig
USES+=		desktop-file-utils
USE_GNOME+=	gtk20
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

.undef WITH_DEBUG
.include <bsd.port.pre.mk>

ACLOCAL_ARGS=	-I "${WRKSRC}/m4"
CPPFLAGS=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAKE_ENV+=	ENVCFLAGS="${CFLAGS}" ENVCFLAGSCXX="${CXXFLAGS}"
MAKE_ENV+=	ENVLINKFLAGS="${LDFLAGS}"
MAKE_ENV+=	LANG=C LC_ALL=C
MAKE_ENV+=	SED="${LOCALBASE}/bin/gsed" USE_GMAKE=1

pre-configure:
	@${TOUCH} ${WRKSRC}/autogen.lastrun

post-configure:
	@${TOUCH} ${WRKSRC}/src.downloaded

do-build:
	@cd ${WRKSRC} && ${SETENV} DESTDIR="" ${MAKE_ENV} ${GMAKE}

do-install:
	@cd ${WRKSRC} && ${SETENV} DESTDIR="${LODESTDIR}" \
	    ${GMAKE} distro-pack-install

	@${RM} -f ${PLISTF} ${PLISTD}
	# It seems that the empty directories are necessary for libreoffice keep them for now
	@cd ${LODESTDIR}${PREFIX} && ${FIND} -d lib/libreoffice -type d \
	    -empty -exec ${ECHO_CMD} "@exec ${MKDIR} %D/{}" \; >> ${PLISTD}

	@cd ${LODESTDIR}${PREFIX} && ${FIND} -H -s bin lib man \
	    \( -type f -o -type l \) -print >> ${PLISTF}
	@cd ${LODESTDIR}${PREFIX} && ${FIND} -d lib/libreoffice -type d \
	    -exec ${ECHO_CMD} "@dirrm {}" \; >> ${PLISTD}

	@${ECHO_CMD} etc/bash_completion.d/libreoffice.sh >> ${PLISTF}
	@${ECHO_CMD} "@dirrmtry etc/bash_completion.d" >> ${PLISTD}

.for subdir in applications icons mime mimelnk
	@cd ${LODESTDIR}${PREFIX} && ${FIND} -H -s share/${subdir} \
	    \( -type f -o -type l \) -print >> ${PLISTF}
	@cd ${LODESTDIR}${PREFIX} && ${FIND} -d share/${subdir} -type d \
	    -exec ${ECHO_CMD} "@dirrmtry {}" \; >> ${PLISTD}
.endfor
# do not add the subdir itself as dirrmtry
.for subdir in application-registry mime-info
	@cd ${LODESTDIR}${PREFIX} && ${FIND} -H -s share/${subdir} \
	    \( -type f -o -type l \) -print >> ${PLISTF}
.endfor

	@${SORT} -u ${PLISTF} >> ${TMPPLIST}
	@${GREP} '^@exec ' ${PLISTD} | ${SORT} -u >> ${TMPPLIST}
	@${GREP} '^@dirrm ' ${PLISTD} | ${SORT} -ru >> ${TMPPLIST}
	@${GREP} '^@dirrmtry ' ${PLISTD} | ${SORT} -ru | \
	    ${SED} -e '${PLIST_REINPLACE_DIRRMTRY}' >> ${TMPPLIST}

	@cd ${LODESTDIR}${PREFIX} ; ${PAX} -rw . ${STAGEDIR}${PREFIX}
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/bash_completion.d
	@${INSTALL_SCRIPT} ${LODESTDIR}/etc/bash_completion.d/libreoffice.sh \
	    ${STAGEDIR}${PREFIX}/etc/bash_completion.d

.include <bsd.port.post.mk>

# Created by: Greg Lewis <glewis@FreeBSD.org>
# $FreeBSD$

PORTNAME=	openjdk
PORTVERSION=	${JDK_MAJOR_VERSION}.${PORT_MINOR_VERSION}.${PORT_BUILD_NUMBER}
PORTREVISION=	5
PORTEPOCH=	1
CATEGORIES=	java devel
MASTER_SITES=	http://download.java.net/openjdk/jdk${JDK_MAJOR_VERSION}u${JDK_MINOR_VERSION}/promoted/b${JDK_BUILD_NUMBER}/ \
		http://download.java.net/jaxp/1.4.5/:jaxp \
		http://icedtea.classpath.org/download/drops/:jaxp \
		http://download.java.net/glassfish/components/jax-ws/openjdk/jdk7/:jaxws \
		http://icedtea.classpath.org/download/drops/:jaxws \
		https://java.net/downloads/jax-ws/JDK7/:jaf \
		http://icedtea.classpath.org/download/drops/:jaf \
		http://dl.wolfpond.org/openjdk7/:bootstrap \
		${MASTER_SITE_APACHE:S,%SUBDIR%/,ant/binaries/:ant,}
DISTFILES=	${JDK_SRC_DISTFILE}${EXTRACT_SUFX} \
		${BOOTSTRAP_DISTFILE}:bootstrap \
		${ANT_DISTFILE}${EXTRACT_SUFX}:ant
EXTRACT_ONLY=	${JDK_SRC_DISTFILE}${EXTRACT_SUFX} \
		${BOOTSTRAP_DISTFILE} \
		${ANT_DISTFILE}${EXTRACT_SUFX}

MAINTAINER=	glewis@FreeBSD.org
COMMENT=	Java Development Kit 7

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		dos2unix iconv gmake zip
USE_XORG+=	x11 xext xi xrender xt xtst
MAKE_ARGS=	CC=${CC:Q} CXX=${CXX:Q} HOST_CC=${CC:Q}
MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=		DEBUG POLICY TZUPDATE
OPTIONS_DEFAULT=	POLICY TZUPDATE
DEBUG_DESC=		Enable extra debugging info
POLICY_DESC=		Install the Unlimited Strength Policy Files
TZUPDATE_DESC=		Update the time zone data

PORT_MINOR_VERSION=	55
PORT_BUILD_NUMBER=	13
JDK_MAJOR_VERSION=	7
JDK_MINOR_VERSION=	40
JDK_BUILD_NUMBER=	43
JDK_BUILD_DATE=		26_aug_2013
JDK_SRC_DISTFILE=	${PORTNAME}-${JDK_MAJOR_VERSION}u${JDK_MINOR_VERSION}-fcs-src-b${JDK_BUILD_NUMBER}-${JDK_BUILD_DATE}

# Use our own version of ant to avoid circular dependencies
ANT_VERSION=		1.9.3
ANT_DISTFILE=		apache-ant-${ANT_VERSION}-bin

LATEST_LINK=		openjdk7

LIB_DEPENDS+=	libfreetype.so:${PORTSDIR}/print/freetype2 \
		libasound.so:${PORTSDIR}/audio/alsa-lib
BUILD_DEPENDS+=	zip:${PORTSDIR}/archivers/zip \
		${UNZIP_CMD}:${PORTSDIR}/archivers/unzip \
		${LOCALBASE}/include/cups/cups.h:${PORTSDIR}/print/cups-client
RUN_DEPENDS+=	javavm:${PORTSDIR}/java/javavmwrapper \
		${LOCALBASE}/lib/X11/fonts/dejavu:${PORTSDIR}/x11-fonts/dejavu

DOS2UNIX_FILES=	jdk/src/share/classes/com/sun/org/apache/xml/internal/security/resource/xmlsecurity_en.properties

JDK_ARCH=	${ARCH:S/x86_64/amd64/}
OPENJDK_OSARCH=	bsd-${JDK_ARCH:S/i386/i586/}
INSTALLDIR=	${PREFIX}/${PORTNAME}${JDK_MAJOR_VERSION}

BOOTSTRAP_DISTFILE=	bootstrap-openjdk-7.9.05_2.dfly-3.3-${JDK_ARCH}.tar.xz
BOOTSTRAP_LIBDIRS=	${BOOTSTRAPJDKDIR}/jre/lib/${JDK_ARCH}
NOPRECIOUSMAKEVARS=	yes

ONLY_FOR_ARCHS=	i386 amd64

MAKE_ENV+=	LANG="C" \
		LC_ALL="C" \
		JAVA_HOME="" \
		CLASSPATH="" \
		LD_LIBRARY_PATH="${BOOTSTRAP_LIBDIRS}" \
		MAKEFLAGS="" \
		ALT_BOOTDIR="${BOOTSTRAPJDKDIR}" \
		ALT_FREETYPE_HEADERS_PATH="${LOCALBASE}/include" \
		ALT_FREETYPE_LIB_PATH="${LOCALBASE}/lib" \
		ALT_CUPS_HEADERS_PATH="${LOCALBASE}/include" \
		ALT_X11_PATH="${LOCALBASE}" \
		ALT_PKG_PATH="${LOCALBASE}" \
		ALT_PACKAGE_PATH="${LOCALBASE}" \
		ANT_HOME="${WRKDIR}/apache-ant-${ANT_VERSION}" \
		JAVACMD=${BOOTSTRAPJDKDIR}/bin/java \
		X11DIR="${LOCALBASE}" \
		LOCALDIR="${LOCALBASE}" \
		COMPILER_WARNINGS_FATAL="false" \
		NO_DOCS="true" \
		SKIP_COMPARE_IMAGES="true" \
		SKIP_FASTDEBUG_BUILD="true" \
		SKIP_DEBUG_BUILD="true" \
		ZIP_DEBUGINFO_FILES=0 \
		ENABLE_FULL_DEBUG_SYMBOLS=0 \
		PTHREAD_LIBS="${PTHREAD_LIBS}" \
		MILESTONE="fcs" \
		JDK_MICRO_VERSION="0_${PORT_MINOR_VERSION}" \
		BUILD_NUMBER="b${PORT_BUILD_NUMBER}"

MAKE_ENV+=	HOTSPOT_BUILD_JOBS=${MAKE_JOBS_NUMBER}
MAKE_ENV+=	ALT_PARALLEL_COMPILE_JOBS=${MAKE_JOBS_NUMBER}

DEBUG_MAKE_ENV=	ALT_OBJCOPY=${NONEXISTENT}
POLICY_MAKE_ENV=	UNLIMITED_CRYPTO=1
TZUPDATE_RUN_DEPENDS=	${LOCALBASE}/share/java/zi:${PORTSDIR}/java/java-zoneinfo

.include <bsd.port.options.mk>

.if ${OPSYS} == DragonFly && ${DFLYVERSION} > 300500
.  if ${DFLYVERSION} < 300503
BOOTSTRAP_DISTFILE= bootstrap-openjdk-7.21.11.dfly-3.5-${JDK_ARCH}.tar.xz
.  else
BOOTSTRAP_DISTFILE= bootstrap-openjdk-7.25.15.dfly-3.5-${JDK_ARCH}.tar.xz
.  endif
.endif

BOOTSTRAPJDKDIR=	${WRKDIR}/bootstrap

.include <bsd.port.pre.mk>

.if empty(ICONV_LIB)
MAKE_ENV+=	EXTRA_CFLAGS=-DLIBICONV_PLUG
.endif

post-patch:
	@${REINPLACE_CMD} "s|%%LOCALBASE%%|${LOCALBASE}|" \
		${WRKSRC}/hotspot/src/os/bsd/vm/os_bsd.cpp \
		${WRKSRC}/jdk/src/share/classes/sun/print/PSPrinterJob.java
.if empty(ICONV_LIB)
	@${REINPLACE_CMD} 's| -liconv||' \
		${WRKSRC}/Makefile \
		${WRKSRC}/jdk/make/sun/splashscreen/Makefile \
		${WRKSRC}/jdk/make/java/npt/Makefile \
		${WRKSRC}/jdk/make/java/instrument/Makefile
.endif

# override do-build to filter out _MAKE_JOBS to enable parallel build
do-build:
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} \
		${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${ALL_TARGET}

.if ${PORT_OPTIONS:MTZUPDATE}
pre-install:
	@# Update time zones
	@${RM} -rf ${WRKSRC}/build/${OPENJDK_OSARCH}/j2sdk-image/jre/lib/zi
	@${LN} -s -f ${LOCALBASE}/share/java/zi \
		${WRKSRC}/build/${OPENJDK_OSARCH}/j2sdk-image/jre/lib
.endif

do-install:
	@${MKDIR} ${STAGEDIR}${INSTALLDIR}
	@cd ${WRKSRC}/build/${OPENJDK_OSARCH}/j2sdk-image && \
		${PAX} -rw . ${STAGEDIR}${INSTALLDIR}
	@${INSTALL_DATA} ${WRKSRC}/build/${OPENJDK_OSARCH}/btjars/compilefontconfig.jar ${WRKSRC}/build/${OPENJDK_OSARCH}/btjars/javazic.jar ${STAGEDIR}${INSTALLDIR}/jre/lib/
	@${INSTALL_DATA} ${FILESDIR}/cacerts ${STAGEDIR}${INSTALLDIR}/jre/lib/security/cacerts
	@${ECHO} "@unexec ${LOCALBASE}/bin/unregistervm ${INSTALLDIR}/bin/java" >> ${TMPPLIST}
	@${FIND} -s ${STAGEDIR}${INSTALLDIR} -not -type d | ${SORT} | \
		${SED} -e 's#^${STAGEDIR}${PREFIX}/##' >> ${TMPPLIST}
	@${FIND} ${STAGEDIR}${INSTALLDIR} -type d | ${SORT} -r | \
		${SED} -e 's,^${STAGEDIR}${PREFIX}/,@dirrm ,' >> ${TMPPLIST}
	@${ECHO} "@exec ${LOCALBASE}/bin/registervm '${INSTALLDIR}/bin/java # OpenJDK${JDK_MAJOR_VERSION}'" >> ${TMPPLIST}

.include <bsd.port.post.mk>

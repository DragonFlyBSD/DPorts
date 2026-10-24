PORTNAME=	sqldeveloper
DISTVERSION=	24.3.1.347.1826
DISTVERSIONSUFFIX=	-no-jre
PORTREVISION=	3
CATEGORIES=	databases java
# https://www.oracle.com/database/sqldeveloper/technologies/download/
MASTER_SITES=	https://download.oracle.com/otn_software/java/sqldeveloper/
DIST_SUBDIR=	oracle

MAINTAINER=	vvd@FreeBSD.org
COMMENT=	Graphical tool for database development
WWW=		https://www.oracle.com/database/technologies/appdev/sqldeveloper-landing.html

LICENSE=	FUTC
LICENSE_NAME=	Oracle Free Use Terms and Conditions (Oracle Free License)
LICENSE_FILE=	${WRKSRC}/LICENSE.txt
LICENSE_PERMS=	dist-mirror no-dist-sell pkg-mirror no-pkg-sell auto-accept

RUN_DEPENDS=	openjfx14>=0:java/openjfx14 \
		bash:shells/bash

USES=		gnome java zip
JAVA_VERSION=	17

DATADIR=	${JAVASHAREDIR}/${PORTNAME}
NO_ARCH=	yes
NO_BUILD=	yes
SUB_FILES=	${PORTNAME}.desktop ${PORTNAME}.sh
SUB_LIST=	JAVA_HOME=${JAVA_HOME} \
		PORTNAME=${PORTNAME} \
		OPENJFX14_JVM_OPTIONS="-J--module-path=${LOCALBASE}/openjfx14/lib -J--add-modules=javafx.swing,javafx.web"

WRKSRC=		${WRKDIR}/${PORTNAME}

do-install:
	${ECHO_MSG} -n ">> Installing scripts..."
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME}.sh ${STAGEDIR}/${PREFIX}/bin/${PORTNAME}
	${ECHO_MSG} " [ DONE ]"

.for d in configuration dataminer dropins equinox \
    external ide javavm jdbc jdev jlib jviews modules \
    netbeans rdbms sleepycat sqldeveloper sqlj svnkit
	${ECHO_MSG} -n ">> Installing data directory '${d}'..."
	cd ${WRKSRC} && ${FIND} ${d} -type d \
		-exec ${MKDIR} ${STAGEDIR}/${DATADIR}/\{} \;
	cd ${WRKSRC} && ${FIND} ${d} -type f \
		-not -name "*.exe" \
		-not -name "*.dll" \
		-not -name "*.so" \
		-not -name "*.jnilib" \
		-exec ${INSTALL_DATA} \{} ${STAGEDIR}/${DATADIR}/\{} \;
	${ECHO_MSG} " [ DONE ]"
.endfor

	${RM} -r ${STAGEDIR}/${DATADIR}/modules/javafx
	${RM} -r ${STAGEDIR}/${DATADIR}/netbeans/platform/modules/lib

	@${ECHO_MSG} ">> Installing icon and desktop file ..."
	@${MKDIR} ${STAGEDIR}/${PREFIX}/share/applications/ \
	    ${STAGEDIR}/${PREFIX}/share/icons/hicolor/32x32/apps/
	${INSTALL_DATA} ${WRKDIR}/${PORTNAME}.desktop ${STAGEDIR}/${PREFIX}/share/applications/
	${INSTALL_DATA} ${WRKSRC}/icon.png ${STAGEDIR}/${PREFIX}/share/icons/hicolor/32x32/apps/${PORTNAME}.png

	${ECHO_MSG} " [ DONE ]"

.include <bsd.port.mk>

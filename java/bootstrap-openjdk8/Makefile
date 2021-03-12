
PORTNAME=	openjdk8
PORTVERSION=	8.181
PORTREVISION=	1
CATEGORIES=	java devel
PKGNAMEPREFIX=	bootstrap-
DISTNAME=	${JDK_PORT}-${JDK_ARCH}-${PORTVERSION}

MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
MAINTAINER=	zrj@ef.irc
COMMENT=	Java Development Kit 8 (bootstrap)

LICENSE=	GPLv2

USES=		tar:xz

NO_BUILD=	yes
PLIST_SUB=	JDK_ROOT=${JDK_ROOT} JDK_ARCH=amd64
WRKSRC=		${WRKDIR}/${JDK_ROOT}

JDK_PORT=	${PKGNAMEPREFIX}${PORTNAME}
JDK_ROOT=	${PKGNAMEPREFIX}${PORTNAME}
JDK_ARCH=	${ARCH}

INSTALLDIR=	${STAGEDIR}${PREFIX}/${JDK_ROOT}

# adjust older bootstrap to new layout
REMNANTSb=	appletviewer extcheck idlj jarsigner java-rmi.cgi javadoc jcmd \
		jconsole jdb jdeps jhat jinfo jjs jmap jps jrunscript \
		jsadebugd jstack jstat jstatd keytool orbd pack200 policytool \
		rmid rmiregistry schemagen serialver servertool tnameserv \
		unpack200 wsgen wsimport xjc
REMNANTSi=	classfile_constants.h jawt.h jdwpTransport.h jvmti.h jvmticmlr.h
REMNANTSjl=	calendars.properties classlist compilefontconfig.jar \
		content-types.properties flavormap.properties fontconfig.bfc \
		fontconfig.properties.src hijrah-config-umalqura.properties \
		javazic.jar jvm.hprof.txt management-agent.jar \
		psfont.properties.ja psfontj2d.properties sound.properties
REMNANTSjls=	blacklisted.certs cacerts java.policy
REMNANTSjla=	jexec libattach.so libawt_xawt.so libdt_socket.so \
		libfontmanager.so libhprof.so libinstrument.so \
		libj2gss.so libj2pcsc.so libj2pkcs11.so libjaas_unix.so \
		libjava_crw_demo.so libjawt.so libjdwp.so libjpeg.so \
		libjsdt.so libjsig.so libjsound.so libjsoundalsa.so \
		liblcms.so libmanagement.so libmlib_image.so libnpt.so \
		libsaproc.so libsplashscreen.so libsunec.so libunpack.so
REMNANTSjlas=	Xusage.txt libjsig.so

do-install:
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${INSTALLDIR}
	@cd ${WRKSRC} && ${COPYTREE_BIN} bin ${INSTALLDIR}
.for e in ${REMNANTSb}
	${RM} ${INSTALLDIR}/bin/${e}
.endfor
.for e in ${REMNANTSi}
	${RM} ${INSTALLDIR}/include/${e}
.endfor
.for e in ${REMNANTSjl}
	${RM} ${INSTALLDIR}/jre/lib/${e}
.endfor
.for e in ${REMNANTSjls}
	${RM} ${INSTALLDIR}/jre/lib/security/${e}
.endfor
.for e in ${REMNANTSjla}
	${RM} ${INSTALLDIR}/jre/lib/amd64/${e}
.endfor
.for e in ${REMNANTSjlas}
	${RM} ${INSTALLDIR}/jre/lib/amd64/server/${e}
.endfor
	${RM} -rf ${INSTALLDIR}/jre/bin
	${RM} -rf ${INSTALLDIR}/jre/lib/cmm
	${RM} -rf ${INSTALLDIR}/jre/lib/images
	${RM} -rf ${INSTALLDIR}/jre/lib/management
	${RM} -rf ${INSTALLDIR}/jre/lib/security/policy
	${MV} ${INSTALLDIR}/jre/lib/amd64/jli ${INSTALLDIR}/lib/amd64/
	${RM} -f ${INSTALLDIR}/lib/amd64/libjli.so

.include <bsd.port.mk>

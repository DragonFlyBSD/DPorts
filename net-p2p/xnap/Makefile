# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: ports/net-p2p/xnap/Makefile,v 1.37 2012/12/10 13:48:07 svnexp Exp $

PORTNAME=	XNap
DISTVERSION=	2.5r3
PORTREVISION=	3
CATEGORIES=	net-p2p audio java
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME}/2.5r3
#DISTNAME=	${PORTNAME:tl}-${PORTVERSION:S/.p/-pre/:S/.b/-beta/}
DISTNAME=	${PORTNAME:tl}-${DISTVERSION}

MAINTAINER=	conrads@cox.net
COMMENT=	Pure Java napster client; also, supports OpenNap & giFT (FastTrack)

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

JAVAVM=		${LOCALBASE}/bin/java

DOC_FILES=	AUTHORS COPYING COPYING.LIB NEWS README \
		TODO
PORTDOCS=	${DOC_FILES}

PLIST_FILES=	\
		bin/${PORTNAME:tl} \
		%%JAVAJARDIR%%/${PORTNAME:tl}.jar

post-patch:
	@${SED} -e "s|%%JAVAJARDIR%%|${JAVAJARDIR:S,^${PREFIX}/,,}|; \
		s|%%JAVAVM%%|${JAVAVM}|; \
		s|%%JAVA_VERSION%%|${JAVA_VERSION}|; \
		s|%%PREFIX%%|${PREFIX}|" \
		${FILESDIR}/wrapper.sh > ${WRKDIR}/wrapper.sh

do-install:
	@${INSTALL_DATA} ${WRKSRC}/xnap.jar \
		${JAVAJARDIR}/${PORTNAME:tl}.jar
	@${INSTALL_SCRIPT} ${WRKDIR}/wrapper.sh ${PREFIX}/bin/${PORTNAME:tl}
.ifndef(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for doc in ${DOC_FILES}
	@${INSTALL_DATA} ${WRKSRC}/${doc} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>

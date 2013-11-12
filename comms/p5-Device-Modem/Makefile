# Created by: Anders Nordby <anders@FreeBSD.org>
# $FreeBSD: comms/p5-Device-Modem/Makefile 332840 2013-11-05 12:30:46Z vanilla $

PORTNAME=	Device-Modem
PORTVERSION=	1.56
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl class to interface generic modems (AT-compliant)

BUILD_DEPENDS=	p5-Device-SerialPort>=0:${PORTSDIR}/comms/p5-Device-SerialPort
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-install:
.ifndef(NOPORTEXAMPLES)
	@${ECHO_MSG} "===>   Installing examples for ${PKGNAME}"
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/*.pl ${STAGEDIR}${EXAMPLESDIR}
.endif

.include <bsd.port.mk>

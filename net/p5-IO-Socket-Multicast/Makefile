# Created by: Janos.Mohacsi@dante.org.uk
# $FreeBSD: head/net/p5-IO-Socket-Multicast/Makefile 343452 2014-02-09 10:46:23Z ehaupt $

PORTNAME=	IO-Socket-Multicast
PORTVERSION=	1.12
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Perl module to send and receive multicast messages

RUN_DEPENDS=	p5-IO-Interface>=0:${PORTSDIR}/net/p5-IO-Interface
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	EXAMPLES

.include <bsd.port.options.mk>

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>

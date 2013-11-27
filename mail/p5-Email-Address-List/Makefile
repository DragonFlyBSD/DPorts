# Created by: Matthew Seaman <matthew@FreeBSD.org>
# $FreeBSD: mail/p5-Email-Address-List/Makefile 334981 2013-11-26 23:56:58Z matthew $

PORTNAME=	Email-Address-List
PORTVERSION=	0.01
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	RFC-close address list parsing

BUILD_DEPENDS=	p5-Email-Address>0:${PORTSDIR}/mail/p5-Email-Address
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

regression-test: build
	@cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>

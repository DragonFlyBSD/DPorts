# Created by: Vadim Vatlin
# $FreeBSD: textproc/p5-Unicode-Escape/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	Unicode-Escape
PORTVERSION=	0.0.2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Escape and unescape Unicode characters other than ASCII

BUILD_DEPENDS=	p5-Unicode-String>=0:${PORTSDIR}/converters/p5-Unicode-String
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>

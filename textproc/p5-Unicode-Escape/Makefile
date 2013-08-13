# Created by: Vadim Vatlin
# $FreeBSD: textproc/p5-Unicode-Escape/Makefile 324175 2013-08-02 21:38:09Z mat $

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

MAN3=		Unicode::Escape.3

.include <bsd.port.mk>

# $FreeBSD: textproc/p5-Text-Patch/Makefile 340915 2014-01-24 15:52:12Z mat $

PORTNAME=	Text-Patch
PORTVERSION=	1.8
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to patch text with given patch

RUN_DEPENDS=	p5-Text-Diff>0:${PORTSDIR}/textproc/p5-Text-Diff
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

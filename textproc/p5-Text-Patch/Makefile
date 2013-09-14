# $FreeBSD: textproc/p5-Text-Patch/Makefile 326942 2013-09-11 06:27:41Z az $

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

MAN3=	Text::Patch.3

.include <bsd.port.mk>

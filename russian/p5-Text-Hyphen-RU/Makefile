# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: russian/p5-Text-Hyphen-RU/Makefile 327884 2013-09-22 17:59:41Z sunpoet $

PORTNAME=	Text-Hyphen-RU
PORTVERSION=	0.11
CATEGORIES=	russian perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Determine positions for hyphens inside russian words

LICENSE=	BSD

BUILD_DEPENDS=	p5-Text-Hyphen>=0:${PORTSDIR}/textproc/p5-Text-Hyphen
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_STAGE=	yes
USE_PERL5=	configure
USES=		perl5

MAN3=		Text::Hyphen::RU.3

.include <bsd.port.mk>

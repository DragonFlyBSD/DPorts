# Created by: skreuzer@exit2shell.com
# $FreeBSD: devel/p5-relative/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	relative
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SAPER
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Load modules with relative names

RUN_DEPENDS=	p5-UNIVERSAL-require>=0.11:${PORTSDIR}/devel/p5-UNIVERSAL-require

BUILD_DEPEND=	${RUN_DEPENDS} \
				p5-Test-Simple>=0.74:${PORTSDIR}/devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

MAN3=		relative.3

NO_STAGE=	yes
.include <bsd.port.mk>

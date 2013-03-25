# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-File-ShareDir/Makefile 313975 2013-03-12 13:39:43Z bapt $

PORTNAME=	File-ShareDir
PORTVERSION=	1.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Locate per-dist and per-module shared files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Class-Inspector>=1.12:${PORTSDIR}/devel/p5-Class-Inspector \
		p5-Params-Util>=0.07:${PORTSDIR}/devel/p5-Params-Util
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	File::ShareDir.3

.include <bsd.port.mk>

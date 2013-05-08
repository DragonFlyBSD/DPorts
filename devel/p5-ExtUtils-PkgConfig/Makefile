# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-ExtUtils-PkgConfig/Makefile 316333 2013-04-23 10:13:19Z bapt $

PORTNAME=	ExtUtils-PkgConfig
PORTVERSION=	1.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simplistic interface to pkg-config

LICENSE=	LGPL3

USES=		pkgconfig:both
PERL_CONFIGURE=	yes

MAN3=		ExtUtils::PkgConfig.3

post-patch:
	@${PERL} -pi -e '$$_="" if $$.==1' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>

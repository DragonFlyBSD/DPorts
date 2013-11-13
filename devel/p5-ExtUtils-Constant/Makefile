# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-ExtUtils-Constant/Makefile 331936 2013-10-29 09:01:39Z vanilla $

PORTNAME=	ExtUtils-Constant
PORTVERSION=	0.23
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate XS code to import C header constants

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/INSTALLDIRS/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>

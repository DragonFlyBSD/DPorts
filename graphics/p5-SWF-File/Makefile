# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: graphics/p5-SWF-File/Makefile 334223 2013-11-18 16:45:09Z mat $

PORTNAME=	SWF-File
PORTVERSION=	0.42
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	graphics www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Manipulating Flash movie (SWF) files

BUILD_DEPENDS=	p5-Data-TemporaryBag>=0:${PORTSDIR}/devel/p5-Data-TemporaryBag
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 dos2unix
USE_PERL5=	configure

post-configure:
	@${PERL} -pi -e 's/^(POD2MAN_EXE.*)$$/\1 --lax/;' ${WRKSRC}/Makefile

.include <bsd.port.mk>

# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-URI-ParseSearchString/Makefile 318146 2013-05-14 08:45:32Z tobez $

PORTNAME=	URI-ParseSearchString
PORTVERSION=	3.51.0
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/.0$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse Apache referer logs and extract search engine query strings

RUN_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

PERL_CONFIGURE=	yes

MAN3=		URI::ParseSearchString.3

.include <bsd.port.mk>

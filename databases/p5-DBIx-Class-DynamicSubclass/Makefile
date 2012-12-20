# New ports collection makefile for:	p5-DBIx-Class-DynamicSubclass
# Date created:		2008-07-15
# Whom:			Vladimir Timofeev <vovkasm@gmail.com>
#
# $FreeBSD: ports/databases/p5-DBIx-Class-DynamicSubclass/Makefile,v 1.3 2012/11/17 05:55:14 svnexp Exp $
#

PORTNAME=	DBIx-Class-DynamicSubclass
PORTVERSION=	0.03
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Use dynamic subclassing with DBIx::Class

RUN_DEPENDS=	p5-DBIx-Class>=0.07003:${PORTSDIR}/databases/p5-DBIx-Class
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	DBIx::Class::DynamicSubclass.3

.include <bsd.port.mk>

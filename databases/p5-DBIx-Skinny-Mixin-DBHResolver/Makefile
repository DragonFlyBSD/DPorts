# New ports collection makefile for:	DBIx::Skinny::Mixin::DBHResolver
# Date created:		28 Nov 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-DBIx-Skinny-Mixin-DBHResolver/Makefile,v 1.3 2012/11/17 05:55:15 svnexp Exp $
#

PORTNAME=	DBIx-Skinny-Mixin-DBHResolver
PORTVERSION=	0.04
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of DBIx::DBHResolver mixin for DBIx::Skinny

RUN_DEPENDS=	\
	p5-DBIx-DBHResolver>0:${PORTSDIR}/databases/p5-DBIx-DBHResolver \
	p5-DBIx-Skinny>0:${PORTSDIR}/databases/p5-DBIx-Skinny
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	DBIx::Skinny::Mixin::DBHResolver.3

.include <bsd.port.mk>

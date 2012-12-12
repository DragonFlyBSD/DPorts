# New ports collection makefile for:	databases/p5-DBIx-Perlish
# Date created:				22 February 2007
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-DBIx-Perlish/Makefile,v 1.30 2012/11/17 05:55:15 svnexp Exp $
#

PORTNAME=	DBIx-Perlish
PORTVERSION=	0.59
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	A perlish interface to SQL databases

BUILD_DEPENDS=	p5-DBI>0:${PORTSDIR}/databases/p5-DBI \
		p5-PadWalker>0:${PORTSDIR}/devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	DBIx::Perlish.3

.include <bsd.port.mk>

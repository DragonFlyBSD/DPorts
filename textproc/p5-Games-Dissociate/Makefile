# New ports collection makefile for:	p5-Games-Dissociate
# Date created:				21 Jun 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Games-Dissociate/Makefile,v 1.8 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	Games-Dissociate
PORTVERSION=	0.19
CATEGORIES=	textproc games perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:AVIF
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Dissociated Press algorithm and filter

TEST_DEPENDS=	p5-Test-Pod>=1.00:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

MAN3=	Games::Dissociate.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>

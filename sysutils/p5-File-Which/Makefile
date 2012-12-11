# New ports collection makefile for:	p5-File-Which
# Date created:				28 December 2002
# Whom:					Dmitry Sivachenko <demon@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/p5-File-Which/Makefile,v 1.7 2012/11/17 06:01:40 svnexp Exp $
#

PORTNAME=	File-Which
PORTVERSION=	1.09
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Portable implementation of `which' in Perl

TEST_DEPENDS=	p5-Test-Script>=1.05:${PORTSDIR}/devel/p5-Test-Script

PERL_CONFIGURE=	yes

MAN1=		pwhich.1
MAN3=		File::Which.3

.include <bsd.port.mk>

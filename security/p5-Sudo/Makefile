# New ports collection makefile for:	p5-Sudo
# Date created:		2007-05-27
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/security/p5-Sudo/Makefile,v 1.8 2012/11/17 06:01:14 svnexp Exp $
#

PORTNAME=	Sudo
PORTVERSION=	0.32
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LANDMAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for running a command line sudo

BUILD_DEPENDS=	p5-Term-ReadPassword>=0:${PORTSDIR}/devel/p5-Term-ReadPassword \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-IPC-Run>=0:${PORTSDIR}/devel/p5-IPC-Run
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Sudo.3

.include <bsd.port.mk>

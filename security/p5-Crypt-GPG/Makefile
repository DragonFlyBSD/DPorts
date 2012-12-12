# New ports collection Makefile for:	p5-Crypt-GPG
# Date created:				17 Dec 2006
# Whom:	      				Gabor Kovesdan
# $FreeBSD: ports/security/p5-Crypt-GPG/Makefile,v 1.11 2012/11/17 06:01:11 svnexp Exp $

PORTNAME=	Crypt-GPG
PORTVERSION=	1.63
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Perl extension for GnuPG

RUN_DEPENDS=	p5-IPC-Run>=0:${PORTSDIR}/devel/p5-IPC-Run \
		p5-TimeDate>=1.20:${PORTSDIR}/devel/p5-TimeDate

PERL_CONFIGURE=	yes

MAN3=		Crypt::GPG.3

.include <bsd.port.mk>

# New ports collection makefile for:	p5-Sys-Syscall
# Date created:		2006-09-28
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Sys-Syscall/Makefile,v 1.5 2012/11/17 05:56:30 svnexp Exp $
#

PORTNAME=	Sys-Syscall
PORTVERSION=	0.23
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Sys
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Access system calls that Perl doesn\'t provide access to

PERL_CONFIGURE=	yes

MAN3=		Sys::Syscall.3 Sys::README.3

.include <bsd.port.pre.mk>
post-patch:
	@${RM} ${WRKSRC}/lib/Sys/Syscall.pm.orig

.include <bsd.port.post.mk>

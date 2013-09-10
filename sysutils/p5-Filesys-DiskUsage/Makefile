# New ports collection makefile for:	sysutils/p5-Filesys-DiskUsage
# Date created:				20 September 2005
# Whom:					Alex Deiter <tiamat@komi.mts.ru>
#
# $FreeBSD: sysutils/p5-Filesys-DiskUsage/Makefile 326575 2013-09-07 07:44:26Z az $
#

PORTNAME=	Filesys-DiskUsage
PORTVERSION=	0.05
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Perl equivalent of du(1)

USES=		perl5
USE_PERL5=	configure

MAN3=		Filesys::DiskUsage.3

post-patch:
	@${RM} ${WRKSRC}/lib/Filesys/DiskUsage.pm.orig

.include <bsd.port.mk>

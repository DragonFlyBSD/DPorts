# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: sysutils/p5-Filesys-DiskSpace/Makefile 338850 2014-01-06 09:24:24Z az $

PORTNAME=	Filesys-DiskSpace
PORTVERSION=	0.05
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl equivalent of statfs(2)

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${FIND} ${WRKSRC} -name "*\.orig" -delete

.include <bsd.port.mk>

# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-PasswdMD5/Makefile 332949 2013-11-06 07:39:31Z vanilla $

PORTNAME=	Crypt-PasswdMD5
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that provides interoperable MD5-based crypt() function

USES=		perl5
USE_PERL5=	configure

pre-patch:
	@${REINPLACE_CMD} -e 's|[[:cntrl:]]$$||g' ${WRKSRC}/PasswdMD5.pm

.include <bsd.port.mk>

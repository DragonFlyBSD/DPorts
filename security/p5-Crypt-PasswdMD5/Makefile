# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: security/p5-Crypt-PasswdMD5/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		Crypt::PasswdMD5.3

pre-patch:
	@${REINPLACE_CMD} -e 's|[[:cntrl:]]$$||g' ${WRKSRC}/PasswdMD5.pm

.include <bsd.port.mk>

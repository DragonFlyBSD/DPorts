# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: net/p5-Filesys-SmbClient/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Filesys-SmbClient
PORTVERSION=	3.2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anders@FreeBSD.org
COMMENT=	Interface for access Samba filesystem with libsmclient.so

LIB_DEPENDS=	smbclient.0:${PORTSDIR}/net/samba-libsmbclient
BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

MAN3=		Filesys::SmbClient.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -i '' -e 's!%%LOCALBASE%%!${LOCALBASE}!g' \
		${WRKSRC}/Makefile.PL

.include <bsd.port.mk>

# New ports collection makefile for:	php5-ftp
# Date created:			7 Jul 2004
# Whom:				Alex Dupre <ale@FreeBSD.org>
#
# $FreeBSD: ftp/php5-ftp/Makefile 317659 2013-05-08 12:49:39Z ale $
#

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php5

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"

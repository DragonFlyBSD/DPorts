# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: ftp/php55-ftp/Makefile 321684 2013-06-24 14:32:11Z ale $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php55

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"

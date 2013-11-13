# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: ftp/php55-ftp/Makefile 332107 2013-10-30 13:32:02Z ale $

CATEGORIES=	ftp

MASTERDIR=	${.CURDIR}/../../lang/php55

PKGNAMESUFFIX=	-ftp

post-patch:
	@${REINPLACE_CMD} s/HAVE_OPENSSL_EXT/__FreeBSD__/ \
		${WRKSRC}/ftp.* ${WRKSRC}/php_ftp.*

.include "${MASTERDIR}/Makefile"
